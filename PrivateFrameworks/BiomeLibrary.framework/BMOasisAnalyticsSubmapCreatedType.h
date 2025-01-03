/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMOasisAnalyticsSubmapCreatedType : BMEventBase <BMStoreData> {
    unsigned long long  _bytesWrittenToDisk;
    unsigned int  _dataVersion;
    bool  _hasBytesWrittenToDisk;
    bool  _hasIsLocationAttached;
    bool  _hasSubmapId;
    bool  _isLocationAttached;
    unsigned long long  _submapId;
}

@property (nonatomic, readonly) unsigned long long bytesWrittenToDisk;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBytesWrittenToDisk;
@property (nonatomic) bool hasIsLocationAttached;
@property (nonatomic) bool hasSubmapId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isLocationAttached;
@property (nonatomic, readonly) unsigned long long submapId;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned long long)bytesWrittenToDisk;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasBytesWrittenToDisk;
- (bool)hasIsLocationAttached;
- (bool)hasSubmapId;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithSubmapId:(id)arg1 isLocationAttached:(id)arg2 bytesWrittenToDisk:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLocationAttached;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasBytesWrittenToDisk:(bool)arg1;
- (void)setHasIsLocationAttached:(bool)arg1;
- (void)setHasSubmapId:(bool)arg1;
- (unsigned long long)submapId;
- (void)writeTo:(id)arg1;

@end
