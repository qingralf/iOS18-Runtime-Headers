/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventSmartCoverAttributes : BKSHIDEventBaseAttributes {
    int  _smartCoverState;
    int  _wakeAnimationStyle;
}

@property (nonatomic) int smartCoverState;
@property (nonatomic) int wakeAnimationStyle;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSmartCoverState:(int)arg1;
- (void)setWakeAnimationStyle:(int)arg1;
- (int)smartCoverState;
- (int)wakeAnimationStyle;

@end
