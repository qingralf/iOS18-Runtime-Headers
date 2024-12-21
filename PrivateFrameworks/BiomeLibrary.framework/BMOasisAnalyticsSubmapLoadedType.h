/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMOasisAnalyticsSubmapLoadedType : BMEventBase <BMStoreData> {
    unsigned long long  _bytesReadFromDisk;
    unsigned int  _dataVersion;
    bool  _hasBytesReadFromDisk;
    bool  _hasIsLocationAttached;
    bool  _hasNumberOfSubmapsWithinLoadingChunk;
    bool  _hasSecondsElapsedSinceLastActive;
    bool  _hasSubmapId;
    bool  _hasTimeToLoadSubmapInSecond;
    bool  _isLocationAttached;
    unsigned int  _numberOfSubmapsWithinLoadingChunk;
    float  _secondsElapsedSinceLastActive;
    unsigned long long  _submapId;
    float  _timeToLoadSubmapInSecond;
}

@property (nonatomic, readonly) unsigned long long bytesReadFromDisk;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBytesReadFromDisk;
@property (nonatomic) bool hasIsLocationAttached;
@property (nonatomic) bool hasNumberOfSubmapsWithinLoadingChunk;
@property (nonatomic) bool hasSecondsElapsedSinceLastActive;
@property (nonatomic) bool hasSubmapId;
@property (nonatomic) bool hasTimeToLoadSubmapInSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocationAttached;
@property (nonatomic, readonly) unsigned int numberOfSubmapsWithinLoadingChunk;
@property (nonatomic, readonly) float secondsElapsedSinceLastActive;
@property (nonatomic, readonly) unsigned long long submapId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float timeToLoadSubmapInSecond;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned long long)bytesReadFromDisk;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasBytesReadFromDisk;
- (bool)hasIsLocationAttached;
- (bool)hasNumberOfSubmapsWithinLoadingChunk;
- (bool)hasSecondsElapsedSinceLastActive;
- (bool)hasSubmapId;
- (bool)hasTimeToLoadSubmapInSecond;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSubmapId:(id)arg1 isLocationAttached:(id)arg2 bytesReadFromDisk:(id)arg3 timeToLoadSubmapInSecond:(id)arg4 secondsElapsedSinceLastActive:(id)arg5 numberOfSubmapsWithinLoadingChunk:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isLocationAttached;
- (id)jsonDictionary;
- (unsigned int)numberOfSubmapsWithinLoadingChunk;
- (float)secondsElapsedSinceLastActive;
- (id)serialize;
- (void)setHasBytesReadFromDisk:(bool)arg1;
- (void)setHasIsLocationAttached:(bool)arg1;
- (void)setHasNumberOfSubmapsWithinLoadingChunk:(bool)arg1;
- (void)setHasSecondsElapsedSinceLastActive:(bool)arg1;
- (void)setHasSubmapId:(bool)arg1;
- (void)setHasTimeToLoadSubmapInSecond:(bool)arg1;
- (unsigned long long)submapId;
- (float)timeToLoadSubmapInSecond;
- (void)writeTo:(id)arg1;

@end