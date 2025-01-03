/* Generated by RuntimeBrowser.
 */

@protocol AppleCommonSchemaMetadata <NSObject>

@required

- (AppleCommonSchemaUUID128 *)bootSessionId;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setBootSessionId:(AppleCommonSchemaUUID128 *)arg1;
- (void)setTimestampSinceBootInNanosecond:(unsigned long long)arg1;
- (unsigned long long)timestampSinceBootInNanosecond;

@end
