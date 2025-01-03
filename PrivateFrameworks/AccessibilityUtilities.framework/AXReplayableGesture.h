/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXReplayableGesture : NSObject <NSSecureCoding> {
    NSArray * _allEvents;
    bool  _arePointsDeviceRelative;
}

@property (nonatomic) bool arePointsDeviceRelative;

+ (bool)supportsSecureCoding;
+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (bool)arePointsDeviceRelative;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfEvents;
- (struct CGPoint { double x1; double x2; })pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (void)setArePointsDeviceRelative:(bool)arg1;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (void)updateForLandscape:(bool)arg1;

@end
