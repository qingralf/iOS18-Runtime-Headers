/* Generated by RuntimeBrowser.
 */

@protocol AXPhoenixClassifier <NSObject>

@required

- (AXPhoenixClassifierConfiguration *)configuration;
- (bool)falsePositiveLoggingEnabled;
- (void)handleAccelerometerData:(struct { double x1; double x2; double x3; })arg1 withTimestamp:(double)arg2;
- (void)reset;
- (void)setFalsePositiveLoggingEnabled:(bool)arg1;
- (void)setPolicyOption:(int)arg1;
- (void)setShouldResetBuffer;
- (void)setTapSpeed:(float)arg1;
- (NSString *)version;

@end
