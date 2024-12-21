/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDCred.framework/CoreIDCred
 */

@interface DCCredentialOptions : NSObject <NSCopying, NSSecureCoding> {
    long long  _deleteInactiveKeysAfterDays;
    long long  _deleteIncompleteCredentialAfterDays;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _payloadProtectionPolicy;
    unsigned long long  _presentmentAuthPolicy;
    unsigned long long  _readerAuthenticationPolicy;
}

@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) unsigned long long payloadProtectionPolicy;
@property (nonatomic) unsigned long long presentmentAuthPolicy;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)deleteInactiveKeysAfterDays;
- (long long)deleteIncompleteCredentialAfterDays;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)payloadProtectionPolicy;
- (unsigned long long)presentmentAuthPolicy;
- (unsigned long long)readerAuthenticationPolicy;
- (void)setDeleteInactiveKeysAfterDays:(long long)arg1;
- (void)setDeleteIncompleteCredentialAfterDays:(long long)arg1;
- (void)setPayloadProtectionPolicy:(unsigned long long)arg1;
- (void)setPresentmentAuthPolicy:(unsigned long long)arg1;
- (void)setReaderAuthenticationPolicy:(unsigned long long)arg1;

@end