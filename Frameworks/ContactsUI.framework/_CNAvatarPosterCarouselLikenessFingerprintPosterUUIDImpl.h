/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface _CNAvatarPosterCarouselLikenessFingerprintPosterUUIDImpl : NSObject <_CNAvatarPosterCarouselLikenessFingerprintImpl> {
    NSUUID * _UUID;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fingerprintForPosterConfiguration:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosterUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUUID:(id)arg1;

@end
