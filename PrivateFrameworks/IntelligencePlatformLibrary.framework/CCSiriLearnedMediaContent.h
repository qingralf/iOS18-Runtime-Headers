/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformLibrary.framework/IntelligencePlatformLibrary
 */

@interface CCSiriLearnedMediaContent : CCItemMessage <CCItemContent, CCItemFieldEnumerable, CCJSONDescribing> {
    NSString * _suggestedAdamId;
    NSString * _userPhrasedAlbumName;
    NSString * _userPhrasedArtistName;
    NSString * _userPhrasedEntityName;
    NSString * _userPhrasedSongName;
    NSString * _userPhrasedVersion;
}

@property (nonatomic, readonly) NSString *suggestedAdamId;
@property (nonatomic, readonly) NSString *userPhrasedAlbumName;
@property (nonatomic, readonly) NSString *userPhrasedArtistName;
@property (nonatomic, readonly) NSString *userPhrasedEntityName;
@property (nonatomic, readonly) NSString *userPhrasedSongName;
@property (nonatomic, readonly) NSString *userPhrasedVersion;

+ (Class)contentMessageClass;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemType;
+ (Class)metaContentMessageClass;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1 parentFieldType:(unsigned short)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUserPhrasedSongName:(id)arg1 userPhrasedArtistName:(id)arg2 userPhrasedAlbumName:(id)arg3 userPhrasedEntityName:(id)arg4 userPhrasedVersion:(id)arg5 suggestedAdamId:(id)arg6 error:(id*)arg7;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)jsonDictionary;
- (id)suggestedAdamId;
- (id)userPhrasedAlbumName;
- (id)userPhrasedArtistName;
- (id)userPhrasedEntityName;
- (id)userPhrasedSongName;
- (id)userPhrasedVersion;

@end
