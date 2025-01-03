/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSGroupSessionKeyValueDelivery : NSObject <NSSecureCoding> {
    NSMutableArray * _deliveryHandlers;
    NSString * _sessionID;
    double  _setupTime;
    id /* block */  _setupXPCCompletionHandler;
    <IDSXPCGroupSessionKeyValueDelivery> * _xpc;
}

+ (void)createWithSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSessionID:(id)arg1;
- (void)_setUpXPC;
- (void)addDeliveryHandler:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1;
- (id)initWithSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeDeliveryHandler:(id)arg1;
- (void)requestDataForKey:(unsigned int)arg1 participantID:(unsigned long long)arg2;
- (void)sendData:(id)arg1 forKey:(unsigned int)arg2 encryption:(unsigned int)arg3 capability:(id)arg4;
- (void)sendData:(id)arg1 forKey:(unsigned int)arg2 encryption:(unsigned int)arg3 capability:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)test_receiveData:(id)arg1 forKey:(unsigned int)arg2 fromParticipant:(unsigned long long)arg3;

@end
