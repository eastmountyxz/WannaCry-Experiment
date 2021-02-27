# WannaCry-Experiment
该资源主要复现了WannCry勒索病毒过程，包括对应的资源、文章和勒索病毒。希望对您有所帮助~

本人坚决反对利用教学方法进行犯罪的行为，一切犯罪行为必将受到严惩，绿色网络需要我们共同维护，更推荐大家了解它们背后的原理，更好地进行防护。

<div align="center">
  <img src="https://img-blog.csdnimg.cn/20200413232834492.png" height="60%" width="60%" />
</div>

WannaCry勒索病毒主要行为是传播和勒索。
- **传播**：利用基于445端口的SMB漏洞MS17-010(永恒之蓝)进行传播
- **勒索**：释放文件，包括加密器、解密器、说明文件、语言文件等；内存加载加密器模块，加密执行类型文件，全部加密后启动解密器；解密器启动后，设置桌面背景显示勒索信息，弹出窗口显示付款账号和勒索信息


其他文件内容如下，下一篇文章会详细介绍勒索原理。
- b.wnry: 中招敲诈者后桌面壁纸
- c.wnry: 配置文件，包含洋葱域名、比特币地址、tor下载地址等
- f.wnry: 可免支付解密的文件列表
- r.wnry: 提示文件，包含中招提示信息
- s.wnry: zip文件，包含Tor客户端
- t.wnry: 测试文件
- u.wnry: 解密程序



<B>参考文章：</B>

[WannaCry勒索病毒复现及分析（一）Python利用永恒之蓝及Win7勒索加密](https://blog.csdn.net/Eastmount/article/details/105407843) <br />
[WannaCry勒索病毒复现及分析（二）MS17-010利用及病毒解析](https://blog.csdn.net/Eastmount/article/details/105640538) <br />
[WannaCry勒索病毒复现及分析（三）蠕虫传播机制分析及IDA和OD逆向](https://blog.csdn.net/Eastmount/article/details/105760940) <br />


## 实验复现

WannaCry运行的整体流程推荐安天公司的框架图，如下图所示：
- 主程序文件利用漏洞传播自身，运行WannaCry勒索程序
- WannaCry勒索程序释放tasksche.exe，对磁盘文件进行加密勒索
- @WanaDecryptor@.exe显示勒索信息，解密示例文件

<div align="center">
  <img src="https://img-blog.csdnimg.cn/20200414014519105.png" height="60%" width="60%" />
</div>

## 传播过程
其中，图中上半部分为WannaCry蠕虫的传播部分，该蠕虫通过网络进行传播，有自我复制和传播迅速等特点。传播步骤如下：
- 连接远程域名
- 安装并启动服务
- 建立局域网或公网IP表，为每个IP依次创建线程
- 尝试连接445端口，测试是否存在SMB漏洞
- 如果存在漏洞，则发送包含动态库的Payload进行攻击
- 执行shellcode并使用APC注入将生成的dll注入到进程lsass.exe
- dll调用导出函数PlayGame，释放资源文件并保存为mssecsvc.exe执行，释放勒索程序tasksche.exe
- 被攻击计算机继续使用MS17-010漏洞进行传播


## 勒索过程



## 推荐文章

为了更好帮助读者，作者将参考文献提前。下面给出下各大安全厂商及安全大佬对WannaCry蠕虫分析的文章，强烈推荐大家阅读，作者也吸取了它们的精华，在此感谢。

- 安全厂商样本分析： <br />
[1] [安天针对勒索蠕虫“魔窟”（WannaCry）的深度分析报告](https://www.antiy.com/response/wannacry.html) <br />
[2] [[分享] 勒索病毒WannaCry深度技术分析——详解传播、感染和危害细节 - 火绒安全](https://www.52pojie.cn/thread-608742-1-1.html) <br />
[3] [WannaCry勒索病毒详细解读 - 腾讯电脑管家](https://www.freebuf.com/articles/system/135196.html?mType=Group) <br />
[4] [NSA Eternalblue SMB 漏洞分析 - 360核心安全](https://blogs.360.cn/post/nsa-eternalblue-smb.html) <br />
[5] [针对WannaRen勒索软件的梳理与分析 - 安天](https://mp.weixin.qq.com/s?__biz=MjM5MTA3Nzk4MQ==&mid=2650174694&idx=1&sn=97862a88a90a8ac081acb1dffb3a893e) <br />
[6] [【权威报告】WanaCrypt0r勒索蠕虫完全分析报告 - 360追日](https://www.anquanke.com/post/id/86092) <br />
[7] [WannaCry勒索病毒分析报告 - 瑞星](https://www.freebuf.com/articles/paper/134637.html) <br />

- 安全大佬样本分析：
[1] [对WannaCry的深度分析 - 鬼手56（勒索部分详解）](https://blog.csdn.net/qq_38474570/article/details/87716826) <br />
[2] [[原创]WannaCry勒索软件中“永恒之蓝”漏洞利用分析 - 展博](https://bbs.pediy.com/thread-217734.htm) <br />
[3] [[原创]通过Wannacry分析内核shellcode注入dll技术 - dragonwang](https://bbs.pediy.com/thread-221756.htm) <br />
[4] [[病毒分析]WannaCry病毒分析(永恒之蓝) - 小彩虹](https://www.cnblogs.com/wensday/p/9099386.html) <br />
[5] [WannaCry勒索病毒逆向和内网传播数据分析 - sec360zz](https://www.freebuf.com/news/134989.html) <br />
[6] [首发 | Wannacry勒索软件母体主程序逆向分析（含临时解决方案自动化工具）- expsky](https://www.freebuf.com/vuls/134602.html) <br />
[7] [[原创]WannaCry深度详细分析报告（很细很深）- anhkgg](https://www.freebuf.com/column/135722.html) <br />
[8] [https://github.com/rapid7/metasploit-framework](https://github.com/rapid7/metasploit-framework) <br />


<div align="center">
  <img src="https://img-blog.csdnimg.cn/2020042713474914.png" height="60%" width="60%" />
</div>


---

By:Eastmount 2020-04-27
