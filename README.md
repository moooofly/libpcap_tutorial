# libpcap_tutorial

This is a tutorial for libpcap

详细文档说明：[这里](http://yuba.stanford.edu/~casado/pcap/section1.html)    


----------


- Download libpcap source from www.tcpdump.org [here](http://www.tcpdump.org/release/libpcap-0.9.4.tar.gz)
- Download libpcap for win32 from www.winpcap.org
- Check out a better pcap tutorial [here](http://www.tcpdump.org/pcap.htm)

----------

# Intro

- **Packet Capture** Roughly means, to grab a copy of packets off of the wire before they are processed by the operating system. Why would one want to do this? Well, its cool. More practically, packet capture is widely used in network security tools to analyze raw traffic for detecting malicious behaviour (scans and attacks), sniffing, fingerprinting and many other (often devious) uses.
- **libpcap** "provides implementation-independent access to the underlying packet capture facility provided by the operating system" (Stevens, UNP page. 707). So pretty much, libpcap is the library we are going to use to grab packets right as they come off of the network card.

> All the examples in this tutorial assume that you are sitting on an Ethernet. 

----------

![](http://yuba.stanford.edu/~casado/pcap/sniffer.jpg)

