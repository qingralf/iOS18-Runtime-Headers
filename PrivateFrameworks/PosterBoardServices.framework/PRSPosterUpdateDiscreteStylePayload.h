/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices
 */

@interface PRSPosterUpdateDiscreteStylePayload : PRSPosterUpdatePayload {
    NSNumber * _luminance;
    NSNumber * _saturation;
    NSNumber * _variation;
}

@property (nonatomic, readonly) NSNumber *luminance;
@property (nonatomic, readonly) NSNumber *saturation;
@property (nonatomic, readonly) NSNumber *variation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVariation:(id)arg1 saturation:(id)arg2 luminance:(id)arg3;
- (id)luminance;
- (id)rawValue;
- (id)saturation;
- (id)variation;

@end