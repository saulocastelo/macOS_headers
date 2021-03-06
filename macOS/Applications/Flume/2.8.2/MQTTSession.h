//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQTTDecoderDelegate-Protocol.h"
#import "MQTTTransportDelegate-Protocol.h"

@class MQTTDecoder, MQTTMessage, MQTTSSLSecurityPolicy, NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSRunLoop, NSString, NSTimer;
@protocol MQTTPersistence, MQTTSessionDelegate, MQTTTransport;

@interface MQTTSession : NSObject <MQTTDecoderDelegate, MQTTTransportDelegate>
{
    BOOL _sessionPresent;
    BOOL _cleanSessionFlag;
    BOOL _willFlag;
    unsigned char _willQoS;
    BOOL _willRetainFlag;
    unsigned char _protocolLevel;
    BOOL _voip;
    BOOL _synchronPub;
    BOOL _synchronUnsub;
    BOOL _synchronSub;
    BOOL _synchronConnect;
    BOOL _synchronDisconnect;
    unsigned short _keepAliveInterval;
    unsigned short _effectiveKeepAlive;
    unsigned short _txMsgId;
    unsigned short _synchronPubMid;
    unsigned short _synchronUnsubMid;
    unsigned short _synchronSubMid;
    NSArray *certificates;
    id <MQTTSessionDelegate> _delegate;
    id <MQTTPersistence> _persistence;
    CDUnknownBlockType _connectHandler;
    CDUnknownBlockType _connectionHandler;
    CDUnknownBlockType _messageHandler;
    long long _status;
    NSString *_clientId;
    NSString *_userName;
    NSString *_password;
    NSNumber *_serverKeepAlive;
    double _dupTimeout;
    NSString *_willTopic;
    NSData *_willMsg;
    NSNumber *_sessionExpiryInterval;
    NSString *_authMethod;
    NSData *_authData;
    NSNumber *_requestProblemInformation;
    NSNumber *_willDelayInterval;
    NSNumber *_requestResponseInformation;
    NSNumber *_receiveMaximum;
    NSNumber *_topicAliasMaximum;
    NSDictionary *_userProperty;
    NSNumber *_maximumPacketSize;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    MQTTMessage *_connectMessage;
    id <MQTTTransport> _transport;
    NSTimer *_keepAliveTimer;
    NSTimer *_checkDupTimer;
    MQTTDecoder *_decoder;
    CDUnknownBlockType _disconnectHandler;
    NSMutableDictionary *_subscribeHandlers;
    NSMutableDictionary *_unsubscribeHandlers;
    NSMutableDictionary *_publishHandlers;
    MQTTSSLSecurityPolicy *_securityPolicy;
}

@property(retain, nonatomic) MQTTSSLSecurityPolicy *securityPolicy; // @synthesize securityPolicy=_securityPolicy;
@property(nonatomic) BOOL synchronDisconnect; // @synthesize synchronDisconnect=_synchronDisconnect;
@property(nonatomic) BOOL synchronConnect; // @synthesize synchronConnect=_synchronConnect;
@property(nonatomic) unsigned short synchronSubMid; // @synthesize synchronSubMid=_synchronSubMid;
@property(nonatomic) BOOL synchronSub; // @synthesize synchronSub=_synchronSub;
@property(nonatomic) unsigned short synchronUnsubMid; // @synthesize synchronUnsubMid=_synchronUnsubMid;
@property(nonatomic) BOOL synchronUnsub; // @synthesize synchronUnsub=_synchronUnsub;
@property(nonatomic) unsigned short synchronPubMid; // @synthesize synchronPubMid=_synchronPubMid;
@property(nonatomic) BOOL synchronPub; // @synthesize synchronPub=_synchronPub;
@property(nonatomic) unsigned short txMsgId; // @synthesize txMsgId=_txMsgId;
@property(retain, nonatomic) NSMutableDictionary *publishHandlers; // @synthesize publishHandlers=_publishHandlers;
@property(retain, nonatomic) NSMutableDictionary *unsubscribeHandlers; // @synthesize unsubscribeHandlers=_unsubscribeHandlers;
@property(retain, nonatomic) NSMutableDictionary *subscribeHandlers; // @synthesize subscribeHandlers=_subscribeHandlers;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(retain, nonatomic) MQTTDecoder *decoder; // @synthesize decoder=_decoder;
@property(retain, nonatomic) NSTimer *checkDupTimer; // @synthesize checkDupTimer=_checkDupTimer;
@property(retain, nonatomic) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
@property(nonatomic) BOOL voip; // @synthesize voip=_voip;
@property(retain, nonatomic) id <MQTTTransport> transport; // @synthesize transport=_transport;
@property(retain, nonatomic) MQTTMessage *connectMessage; // @synthesize connectMessage=_connectMessage;
@property(retain, nonatomic) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property(retain, nonatomic) NSNumber *maximumPacketSize; // @synthesize maximumPacketSize=_maximumPacketSize;
@property(retain, nonatomic) NSDictionary *userProperty; // @synthesize userProperty=_userProperty;
@property(retain, nonatomic) NSNumber *topicAliasMaximum; // @synthesize topicAliasMaximum=_topicAliasMaximum;
@property(retain, nonatomic) NSNumber *receiveMaximum; // @synthesize receiveMaximum=_receiveMaximum;
@property(retain, nonatomic) NSNumber *requestResponseInformation; // @synthesize requestResponseInformation=_requestResponseInformation;
@property(retain, nonatomic) NSNumber *willDelayInterval; // @synthesize willDelayInterval=_willDelayInterval;
@property(retain, nonatomic) NSNumber *requestProblemInformation; // @synthesize requestProblemInformation=_requestProblemInformation;
@property(retain, nonatomic) NSData *authData; // @synthesize authData=_authData;
@property(retain, nonatomic) NSString *authMethod; // @synthesize authMethod=_authMethod;
@property(retain, nonatomic) NSNumber *sessionExpiryInterval; // @synthesize sessionExpiryInterval=_sessionExpiryInterval;
@property(nonatomic) unsigned char protocolLevel; // @synthesize protocolLevel=_protocolLevel;
@property(nonatomic) BOOL willRetainFlag; // @synthesize willRetainFlag=_willRetainFlag;
@property(nonatomic) unsigned char willQoS; // @synthesize willQoS=_willQoS;
@property(retain, nonatomic) NSData *willMsg; // @synthesize willMsg=_willMsg;
@property(retain, nonatomic) NSString *willTopic; // @synthesize willTopic=_willTopic;
@property(nonatomic) BOOL willFlag; // @synthesize willFlag=_willFlag;
@property(nonatomic) BOOL cleanSessionFlag; // @synthesize cleanSessionFlag=_cleanSessionFlag;
@property(nonatomic) double dupTimeout; // @synthesize dupTimeout=_dupTimeout;
@property(nonatomic) unsigned short effectiveKeepAlive; // @synthesize effectiveKeepAlive=_effectiveKeepAlive;
@property(retain, nonatomic) NSNumber *serverKeepAlive; // @synthesize serverKeepAlive=_serverKeepAlive;
@property(nonatomic) unsigned short keepAliveInterval; // @synthesize keepAliveInterval=_keepAliveInterval;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(nonatomic) BOOL sessionPresent; // @synthesize sessionPresent=_sessionPresent;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(copy) CDUnknownBlockType connectionHandler; // @synthesize connectionHandler=_connectionHandler;
@property(copy, nonatomic) CDUnknownBlockType connectHandler; // @synthesize connectHandler=_connectHandler;
@property(retain, nonatomic) id <MQTTPersistence> persistence; // @synthesize persistence=_persistence;
@property(nonatomic) __weak id <MQTTSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates;
- (void).cxx_destruct;
- (void)mqttTransport:(id)arg1 didFailWithError:(id)arg2;
- (void)mqttTransportDidOpen:(id)arg1;
- (void)mqttTransportDidClose:(id)arg1;
- (void)mqttTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (BOOL)encode:(id)arg1;
- (void)connectWithConnectHandler:(CDUnknownBlockType)arg1;
- (void)connect;
- (void)onPublishExecute:(id)arg1;
- (void)onPublish:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)onUnsubscribeExecute:(id)arg1;
- (void)onUnsubscribe:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)onSubscribeExecute:(id)arg1;
- (void)onSubscribe:(CDUnknownBlockType)arg1 error:(id)arg2 gQoss:(id)arg3;
- (void)onDisconnectExecute:(id)arg1;
- (void)onDisconnect:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)onConnectExecute:(id)arg1;
- (void)onConnect:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)tell;
- (unsigned short)nextMsgId;
- (void)error:(long long)arg1 error:(id)arg2;
- (void)protocolError:(id)arg1;
- (void)connectionError:(id)arg1;
- (void)handlePubcomp:(id)arg1;
- (void)handlePubrel:(id)arg1;
- (void)handlePubrec:(id)arg1;
- (void)handleUnsuback:(id)arg1;
- (void)handleSuback:(id)arg1;
- (void)handlePuback:(id)arg1;
- (void)handlePublish:(id)arg1;
- (void)decoder:(id)arg1 didReceiveMessage:(id)arg2;
- (void)decoder:(id)arg1 handleEvent:(unsigned int)arg2 error:(id)arg3;
- (void)checkTxFlows;
- (void)checkDup:(id)arg1;
- (void)keepAlive:(id)arg1;
- (void)closeInternal;
- (void)disconnectWithReturnCode:(unsigned long long)arg1 sessionExpiryInterval:(id)arg2 reasonString:(id)arg3 userProperty:(id)arg4;
- (void)disconnect;
- (void)closeWithReturnCode:(unsigned long long)arg1 sessionExpiryInterval:(id)arg2 reasonString:(id)arg3 userProperty:(id)arg4 disconnectHandler:(CDUnknownBlockType)arg5;
- (void)closeWithDisconnectHandler:(CDUnknownBlockType)arg1;
- (void)close;
- (unsigned short)publishData:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3 qos:(unsigned char)arg4 publishHandler:(CDUnknownBlockType)arg5;
- (unsigned short)publishData:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3 qos:(unsigned char)arg4;
- (unsigned short)unsubscribeTopics:(id)arg1 unsubscribeHandler:(CDUnknownBlockType)arg2;
- (unsigned short)unsubscribeTopics:(id)arg1;
- (unsigned short)unsubscribeTopic:(id)arg1 unsubscribeHandler:(CDUnknownBlockType)arg2;
- (unsigned short)unsubscribeTopic:(id)arg1;
- (unsigned short)subscribeToTopics:(id)arg1 subscribeHandler:(CDUnknownBlockType)arg2;
- (void)checkTopicFilters:(id)arg1;
- (unsigned short)subscribeToTopics:(id)arg1;
- (unsigned short)subscribeToTopic:(id)arg1 atLevel:(unsigned char)arg2 subscribeHandler:(CDUnknownBlockType)arg3;
- (unsigned short)subscribeToTopic:(id)arg1 atLevel:(unsigned char)arg2;
@property(readonly) unsigned int port;
@property(readonly) NSString *host;
- (id)init;
- (void)publishJson:(id)arg1 onTopic:(id)arg2;
- (void)publishDataExactlyOnce:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3;
- (void)publishDataExactlyOnce:(id)arg1 onTopic:(id)arg2;
- (void)publishDataAtMostOnce:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3;
- (void)publishDataAtMostOnce:(id)arg1 onTopic:(id)arg2;
- (void)publishDataAtLeastOnce:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3;
- (void)publishDataAtLeastOnce:(id)arg1 onTopic:(id)arg2;
- (void)publishData:(id)arg1 onTopic:(id)arg2;
- (void)subscribeTopic:(id)arg1;
- (void)connectToHost:(id)arg1 port:(unsigned int)arg2 usingSSL:(BOOL)arg3 withConnectionHandler:(CDUnknownBlockType)arg4 messageHandler:(CDUnknownBlockType)arg5;
- (void)connectToHost:(id)arg1 port:(unsigned int)arg2 withConnectionHandler:(CDUnknownBlockType)arg3 messageHandler:(CDUnknownBlockType)arg4;
- (void)connectToHost:(id)arg1 port:(unsigned int)arg2;
- (void)connectToHost:(id)arg1 port:(unsigned int)arg2 usingSSL:(BOOL)arg3 connectHandler:(CDUnknownBlockType)arg4;
- (void)connectToHost:(id)arg1 port:(unsigned int)arg2 usingSSL:(BOOL)arg3;
- (id)initWithClientId:(id)arg1 keepAlive:(unsigned short)arg2 connectMessage:(id)arg3 runLoop:(id)arg4 forMode:(id)arg5;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 willTopic:(id)arg6 willMsg:(id)arg7 willQoS:(unsigned char)arg8 willRetainFlag:(BOOL)arg9 runLoop:(id)arg10 forMode:(id)arg11;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 willTopic:(id)arg6 willMsg:(id)arg7 willQoS:(unsigned char)arg8 willRetainFlag:(BOOL)arg9;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 runLoop:(id)arg6 forMode:(id)arg7;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 runLoop:(id)arg4 forMode:(id)arg5;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3;
- (id)initWithClientId:(id)arg1 runLoop:(id)arg2 forMode:(id)arg3;
- (id)initWithClientId:(id)arg1;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 will:(BOOL)arg6 willTopic:(id)arg7 willMsg:(id)arg8 willQoS:(unsigned char)arg9 willRetainFlag:(BOOL)arg10 protocolLevel:(unsigned char)arg11 runLoop:(id)arg12 forMode:(id)arg13 securityPolicy:(id)arg14 certificates:(id)arg15;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 will:(BOOL)arg6 willTopic:(id)arg7 willMsg:(id)arg8 willQoS:(unsigned char)arg9 willRetainFlag:(BOOL)arg10 protocolLevel:(unsigned char)arg11 runLoop:(id)arg12 forMode:(id)arg13 securityPolicy:(id)arg14;
- (id)initWithClientId:(id)arg1 userName:(id)arg2 password:(id)arg3 keepAlive:(unsigned short)arg4 cleanSession:(BOOL)arg5 will:(BOOL)arg6 willTopic:(id)arg7 willMsg:(id)arg8 willQoS:(unsigned char)arg9 willRetainFlag:(BOOL)arg10 protocolLevel:(unsigned char)arg11 runLoop:(id)arg12 forMode:(id)arg13;
- (void)closeAndWait:(double)arg1;
- (void)closeAndWait;
- (BOOL)publishAndWaitData:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3 qos:(unsigned char)arg4 timeout:(double)arg5;
- (BOOL)publishAndWaitData:(id)arg1 onTopic:(id)arg2 retain:(BOOL)arg3 qos:(unsigned char)arg4;
- (BOOL)unsubscribeAndWaitTopics:(id)arg1 timeout:(double)arg2;
- (BOOL)unsubscribeAndWaitTopics:(id)arg1;
- (BOOL)unsubscribeAndWaitTopic:(id)arg1 timeout:(double)arg2;
- (BOOL)unsubscribeAndWaitTopic:(id)arg1;
- (BOOL)subscribeAndWaitToTopics:(id)arg1 timeout:(double)arg2;
- (BOOL)subscribeAndWaitToTopics:(id)arg1;
- (BOOL)subscribeAndWaitToTopic:(id)arg1 atLevel:(unsigned char)arg2 timeout:(double)arg3;
- (BOOL)subscribeAndWaitToTopic:(id)arg1 atLevel:(unsigned char)arg2;
- (BOOL)connectAndWaitToHost:(id)arg1 port:(unsigned int)arg2 usingSSL:(BOOL)arg3 timeout:(double)arg4;
- (BOOL)connectAndWaitToHost:(id)arg1 port:(unsigned int)arg2 usingSSL:(BOOL)arg3;
- (BOOL)connectAndWaitTimeout:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

