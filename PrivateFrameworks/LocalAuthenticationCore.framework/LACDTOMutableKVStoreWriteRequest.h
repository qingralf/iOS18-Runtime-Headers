/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACDTOMutableKVStoreWriteRequest : NSObject <LACDTOKVStoreWriteRequest> {
    bool  _bypassEntitlements;
    NSXPCConnection * _connection;
    NSUUID * _contextUUID;
    long long  _key;
    LACDTOKVStoreValue * _value;
}

@property (nonatomic) bool bypassEntitlements;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSUUID *contextUUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long key;
@property (readonly) Class superclass;
@property (nonatomic, retain) LACDTOKVStoreValue *value;

- (void).cxx_destruct;
- (bool)bypassEntitlements;
- (id)connection;
- (id)contextUUID;
- (id)description;
- (id)initWithKey:(long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)key;
- (void)setBypassEntitlements:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setContextUUID:(id)arg1;
- (void)setKey:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end