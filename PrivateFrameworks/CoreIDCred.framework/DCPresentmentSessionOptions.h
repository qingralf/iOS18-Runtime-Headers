/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDCred.framework/CoreIDCred
 */

@interface DCPresentmentSessionOptions : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _elementFallbackModes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _messageEncodingFormat;
    unsigned long long  _readerAuthenticationPolicy;
    unsigned long long  _responseEncryptionMode;
    unsigned long long  _sessionEncryptionMode;
}

@property (nonatomic) unsigned long long elementFallbackModes;
@property (nonatomic) unsigned long long messageEncodingFormat;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long responseEncryptionMode;
@property (nonatomic) unsigned long long sessionEncryptionMode;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)elementFallbackModes;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionEncryptionMode:(unsigned long long)arg1;
- (id)initWithSessionEncryptionMode:(unsigned long long)arg1 readerAuthenticationPolicy:(unsigned long long)arg2;
- (unsigned long long)messageEncodingFormat;
- (unsigned long long)readerAuthenticationPolicy;
- (unsigned long long)responseEncryptionMode;
- (unsigned long long)sessionEncryptionMode;
- (void)setElementFallbackModes:(unsigned long long)arg1;
- (void)setMessageEncodingFormat:(unsigned long long)arg1;
- (void)setReaderAuthenticationPolicy:(unsigned long long)arg1;
- (void)setResponseEncryptionMode:(unsigned long long)arg1;
- (void)setSessionEncryptionMode:(unsigned long long)arg1;

@end
