/* Generated by RuntimeBrowser.
 */

@protocol RFFont <NSObject>

@required

- (bool)applySmallCaps;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (int)name;
- (void)setApplySmallCaps:(bool)arg1;
- (void)setName:(int)arg1;
- (void)setSystem:(RFSystemFont *)arg1;
- (RFSystemFont *)system;

@end
