/* Generated by RuntimeBrowser.
 */

@protocol AppleCV3DSchemaSubmapLoaded <NSObject>

@required

- (unsigned long long)bytesReadFromDisk;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isLocationAttached;
- (NSData *)jsonData;
- (unsigned int)numberOfSubmapsWithinLoadingChunk;
- (float)secondsElapsedSinceLastActive;
- (void)setBytesReadFromDisk:(unsigned long long)arg1;
- (void)setIsLocationAttached:(bool)arg1;
- (void)setNumberOfSubmapsWithinLoadingChunk:(unsigned int)arg1;
- (void)setSecondsElapsedSinceLastActive:(float)arg1;
- (void)setSubmapId:(unsigned long long)arg1;
- (void)setTimeToLoadSubmapInSecond:(float)arg1;
- (unsigned long long)submapId;
- (float)timeToLoadSubmapInSecond;

@end
