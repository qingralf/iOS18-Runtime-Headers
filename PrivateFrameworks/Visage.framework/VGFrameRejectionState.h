/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Visage.framework/Visage
 */

@interface VGFrameRejectionState : NSObject <NSSecureCoding> {
    struct FrameRejectionState { 
        int reason; 
        NSString *description; 
        float outOfFovOffset; 
        float outOfDistanceRangeOffset; 
        NSDictionary *debugDictionary; 
    }  _internal;
}

@property (nonatomic, readonly) NSDictionary *debugDictionary;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) struct FrameRejectionState { int x1; id x2; float x3; float x4; id x5; } internal;
@property (nonatomic, readonly) float outOfDistanceRangeOffset;
@property (nonatomic, readonly) float outOfFovOffset;
@property (nonatomic, readonly) unsigned long long reason;

+ (unsigned long long)parseInternalRejection:(int)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDictionary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromInternalRejectionState:(struct FrameRejectionState { int x1; id x2; float x3; float x4; id x5; })arg1;
- (id)initWithCoder:(id)arg1;
- (struct FrameRejectionState { int x1; id x2; float x3; float x4; id x5; })internal;
- (bool)isEqual:(id)arg1;
- (float)outOfDistanceRangeOffset;
- (float)outOfFovOffset;
- (unsigned long long)reason;
- (void)setInternal:(struct FrameRejectionState { int x1; id x2; float x3; float x4; id x5; })arg1;

@end
