/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary
 */

@interface BMSafariBrowsingAssistantServerRequestContextFailed : BMEventBase <BMStoreData> {
    unsigned int  _dataVersion;
    bool  _exists;
    bool  _hasExists;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool exists;
@property (nonatomic) bool hasExists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (unsigned int)latestDataVersion;
+ (id)protoFields;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)exists;
- (bool)hasExists;
- (id)initByReadFrom:(id)arg1;
- (id)initWithExists:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasExists:(bool)arg1;
- (void)writeTo:(id)arg1;

@end