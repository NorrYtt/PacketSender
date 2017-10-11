/*
 * This file is part of Packet Sender
 *
 * Licensed GPL v2
 * http://PacketSender.com/
 *
 * Copyright Dan Nagle
 *
 */
#ifndef GLOBALS_H
#define GLOBALS_H

#define QDEBUG() qDebug() << __FILE__ << "/" <<__LINE__  <<"(" << __FUNCTION__ << "):"
#define QDEBUGVAR(var)  QDEBUG() << # var <<  var;

#define DATETIMEFORMAT "hh:mm:ss.zzz"

//#define CLOUD_URL  "https://cloud.packetsender.com/"
#define CLOUD_URL  "http://localhost/"

#define HYPERLINKSTYLE "QPushButton { color: blue; } QPushButton::hover { color: #BC810C; } "


#define TEMPPATH  QDir::toNativeSeparators(QDir::temp().absolutePath()) + "/PacketSender/"
#define SETTINGSPATH QStandardPaths::writableLocation( QStandardPaths::GenericDataLocation )+ "/PacketSender/"

//Load local file if it exists
#define SETTINGSFILE ((QFile::exists("ps_settings.ini")) ? ("ps_settings.ini") : ((SETTINGSPATH)  + "ps_settings.ini"))
#define PACKETSFILE ((QFile::exists("packets.ini")) ? ("packets.ini") : ((SETTINGSPATH)  + "packets.ini"))
#define CERTFILE ((QFile::exists("cert.pem")) ? ("cert.pem") : ((SETTINGSPATH)  + "cert.pem"))
#define KEYFILE ((QFile::exists("key.pem")) ? ("key.pem") : ((SETTINGSPATH)  + "key.pem"))

#define NAMEINIKEY "NAMES"

#define UDPSENDICON ":icons/tx_udp.png"
#define TCPSENDICON ":icons/tx_tcp.png"
#define UDPRXICON ":icons/rx_udp.png"
#define TCPRXICON ":icons/rx_tcp.png"
#define SSLRXICON ":icons/rx_ssl.png"
#define SSLSENDICON ":icons/tx_ssl.png"

#define PSLOGO ":pslogo.png"
#define UPDOWNICON ":icons/moveupdown.png"

//used when binding
#define IPV4_OR_IPV6 (ipMode > 4) ? (QHostAddress::AnyIPv6) : (QHostAddress::AnyIPv4)

#endif // GLOBALS_H
