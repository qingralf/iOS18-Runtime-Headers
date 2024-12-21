/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface MSStickerUsageEvent : NSObject {
    long long  _effectType;
    long long  _sourceType;
    long long  _stickerType;
    long long  _usageType;
}

@property (nonatomic) long long effectType;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long stickerType;
@property (nonatomic) long long usageType;

+ (long long)autoSourceType;
+ (long long)effectTypeForMediaPayload:(id)arg1;
+ (long long)effectTypeForSticker:(id)arg1;
+ (long long)effectTypeFromVKCStickerEffectType:(unsigned long long)arg1;
+ (bool)isPreferredRepresentationAnimated:(id)arg1;
+ (long long)stickerTypeFromExternalURI:(id)arg1;

- (long long)effectType;
- (id)initWithMediaPayload:(id)arg1;
- (id)initWithSticker:(id)arg1;
- (void)send;
- (void)setEffectType:(long long)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setStickerType:(long long)arg1;
- (void)setUsageType:(long long)arg1;
- (long long)sourceType;
- (long long)stickerType;
- (long long)usageType;

@end