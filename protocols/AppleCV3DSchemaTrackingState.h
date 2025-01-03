/* Generated by RuntimeBrowser.
 */

@protocol AppleCV3DSchemaTrackingState <NSObject>

@required

- (float)health;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)mode;
- (unsigned int)numberInlierPoints;
- (unsigned int)numberOfRegularKeyframes;
- (void)setHealth:(float)arg1;
- (void)setMode:(int)arg1;
- (void)setNumberInlierPoints:(unsigned int)arg1;
- (void)setNumberOfRegularKeyframes:(unsigned int)arg1;
- (void)setThreeDoFStateCode:(int)arg1;
- (int)threeDoFStateCode;

@end
