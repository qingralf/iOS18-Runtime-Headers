/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LocalAuthenticationCore.framework/LocalAuthenticationCore
 */

@interface LACMutableCredentialRequest : NSObject <LACCredentialRequest> {
    NSUUID * _contextID;
    long long  _credential;
    NSData * _externalizedContext;
    unsigned int  _identifier;
    unsigned int  _userID;
}

@property (nonatomic, retain) NSUUID *contextID;
@property (nonatomic) long long credential;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int identifier;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int userID;

- (void).cxx_destruct;
- (id)contextID;
- (long long)credential;
- (id)description;
- (id)externalizedContext;
- (unsigned int)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setContextID:(id)arg1;
- (void)setCredential:(long long)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setUserID:(unsigned int)arg1;
- (unsigned int)userID;

@end
