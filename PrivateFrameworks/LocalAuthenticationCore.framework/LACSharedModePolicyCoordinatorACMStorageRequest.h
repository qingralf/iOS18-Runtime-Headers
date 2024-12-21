/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACSharedModePolicyCoordinatorACMStorageRequest : NSObject <LACStorageRequest> {
    NSData * _acl;
    <LACXPCClient> * _client;
    NSUUID * _contextID;
    long long  _domain;
    unsigned int  _identifier;
    long long  _key;
    NSData * _value;
}

@property (nonatomic, retain) NSData *acl;
@property (nonatomic, retain) <LACXPCClient> *client;
@property (nonatomic, retain) NSUUID *contextID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long domain;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) long long key;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *value;

- (void).cxx_destruct;
- (id)acl;
- (id)client;
- (id)contextID;
- (long long)domain;
- (unsigned int)identifier;
- (id)initWithKey:(long long)arg1 boolValue:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (long long)key;
- (void)setAcl:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setDomain:(long long)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setKey:(long long)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end