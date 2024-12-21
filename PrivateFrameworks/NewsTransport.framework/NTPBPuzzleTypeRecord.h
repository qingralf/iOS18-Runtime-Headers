/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPuzzleTypeRecord : PBCodable <NSCopying> {
    NSMutableArray * _allowedStorefrontIDs;
    NTPBRecordBase * _base;
    long long  _behaviorFlags;
    NSMutableArray * _blockedStorefrontIDs;
    NSString * _coverImageURL;
    NSString * _engineResourceID;
    NSString * _exploreTileImageURL;
    NSString * _feedNavImageURL;
    struct { 
        unsigned int behaviorFlags : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int isPublic : 1; 
    }  _has;
    NSString * _imagesResourceID;
    bool  _isPublic;
    NSString * _kind;
    NSString * _language;
    NSMutableArray * _latestPuzzleIDs;
    long long  _minimumNewsVersion;
    NSString * _name;
    NSString * _nameCompact;
    NSString * _nameImageCompactURL;
    NSString * _nameImageForDarkBackgroundURL;
    NSString * _nameImageMaskURL;
    NSString * _nameImageURL;
    NSString * _navigationChromeBackgroundDarkModeImageCompactURL;
    NSString * _navigationChromeBackgroundDarkModeImageLargeURL;
    NSString * _navigationChromeBackgroundDarkModeImageURL;
    NSString * _navigationChromeBackgroundImageCompactURL;
    NSString * _navigationChromeBackgroundImageLargeURL;
    NSString * _navigationChromeBackgroundImageURL;
    NSMutableArray * _promotedPuzzleIDs;
    NSString * _superfeedConfigResourceID;
    NSString * _themeConfiguration;
}

@property (nonatomic, retain) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, retain) NSString *coverImageURL;
@property (nonatomic, retain) NSString *engineResourceID;
@property (nonatomic, retain) NSString *exploreTileImageURL;
@property (nonatomic, retain) NSString *feedNavImageURL;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasBehaviorFlags;
@property (nonatomic, readonly) bool hasCoverImageURL;
@property (nonatomic, readonly) bool hasEngineResourceID;
@property (nonatomic, readonly) bool hasExploreTileImageURL;
@property (nonatomic, readonly) bool hasFeedNavImageURL;
@property (nonatomic, readonly) bool hasImagesResourceID;
@property (nonatomic) bool hasIsPublic;
@property (nonatomic, readonly) bool hasKind;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameCompact;
@property (nonatomic, readonly) bool hasNameImageCompactURL;
@property (nonatomic, readonly) bool hasNameImageForDarkBackgroundURL;
@property (nonatomic, readonly) bool hasNameImageMaskURL;
@property (nonatomic, readonly) bool hasNameImageURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundDarkModeImageCompactURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundDarkModeImageLargeURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundDarkModeImageURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundImageCompactURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundImageLargeURL;
@property (nonatomic, readonly) bool hasNavigationChromeBackgroundImageURL;
@property (nonatomic, readonly) bool hasSuperfeedConfigResourceID;
@property (nonatomic, readonly) bool hasThemeConfiguration;
@property (nonatomic, retain) NSString *imagesResourceID;
@property (nonatomic) bool isPublic;
@property (nonatomic, retain) NSString *kind;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSMutableArray *latestPuzzleIDs;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameCompact;
@property (nonatomic, retain) NSString *nameImageCompactURL;
@property (nonatomic, retain) NSString *nameImageForDarkBackgroundURL;
@property (nonatomic, retain) NSString *nameImageMaskURL;
@property (nonatomic, retain) NSString *nameImageURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundDarkModeImageCompactURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundDarkModeImageLargeURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundDarkModeImageURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundImageCompactURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundImageLargeURL;
@property (nonatomic, retain) NSString *navigationChromeBackgroundImageURL;
@property (nonatomic, retain) NSMutableArray *promotedPuzzleIDs;
@property (nonatomic, retain) NSString *superfeedConfigResourceID;
@property (nonatomic, retain) NSString *themeConfiguration;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)allowedStorefrontIDsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)latestPuzzleIDsType;
+ (Class)promotedPuzzleIDsType;

- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addLatestPuzzleIDs:(id)arg1;
- (void)addPromotedPuzzleIDs:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)base;
- (long long)behaviorFlags;
- (id)blockedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearBlockedStorefrontIDs;
- (void)clearLatestPuzzleIDs;
- (void)clearPromotedPuzzleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverImageURL;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)engineResourceID;
- (id)exploreTileImageURL;
- (id)feedNavImageURL;
- (bool)hasBase;
- (bool)hasBehaviorFlags;
- (bool)hasCoverImageURL;
- (bool)hasEngineResourceID;
- (bool)hasExploreTileImageURL;
- (bool)hasFeedNavImageURL;
- (bool)hasImagesResourceID;
- (bool)hasIsPublic;
- (bool)hasKind;
- (bool)hasLanguage;
- (bool)hasMinimumNewsVersion;
- (bool)hasName;
- (bool)hasNameCompact;
- (bool)hasNameImageCompactURL;
- (bool)hasNameImageForDarkBackgroundURL;
- (bool)hasNameImageMaskURL;
- (bool)hasNameImageURL;
- (bool)hasNavigationChromeBackgroundDarkModeImageCompactURL;
- (bool)hasNavigationChromeBackgroundDarkModeImageLargeURL;
- (bool)hasNavigationChromeBackgroundDarkModeImageURL;
- (bool)hasNavigationChromeBackgroundImageCompactURL;
- (bool)hasNavigationChromeBackgroundImageLargeURL;
- (bool)hasNavigationChromeBackgroundImageURL;
- (bool)hasSuperfeedConfigResourceID;
- (bool)hasThemeConfiguration;
- (unsigned long long)hash;
- (id)imagesResourceID;
- (bool)isEqual:(id)arg1;
- (bool)isPublic;
- (id)kind;
- (id)language;
- (id)latestPuzzleIDs;
- (id)latestPuzzleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)latestPuzzleIDsCount;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (id)name;
- (id)nameCompact;
- (id)nameImageCompactURL;
- (id)nameImageForDarkBackgroundURL;
- (id)nameImageMaskURL;
- (id)nameImageURL;
- (id)navigationChromeBackgroundDarkModeImageCompactURL;
- (id)navigationChromeBackgroundDarkModeImageLargeURL;
- (id)navigationChromeBackgroundDarkModeImageURL;
- (id)navigationChromeBackgroundImageCompactURL;
- (id)navigationChromeBackgroundImageLargeURL;
- (id)navigationChromeBackgroundImageURL;
- (id)promotedPuzzleIDs;
- (id)promotedPuzzleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)promotedPuzzleIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setAllowedStorefrontIDs:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setBlockedStorefrontIDs:(id)arg1;
- (void)setCoverImageURL:(id)arg1;
- (void)setEngineResourceID:(id)arg1;
- (void)setExploreTileImageURL:(id)arg1;
- (void)setFeedNavImageURL:(id)arg1;
- (void)setHasBehaviorFlags:(bool)arg1;
- (void)setHasIsPublic:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setImagesResourceID:(id)arg1;
- (void)setIsPublic:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLatestPuzzleIDs:(id)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setNameCompact:(id)arg1;
- (void)setNameImageCompactURL:(id)arg1;
- (void)setNameImageForDarkBackgroundURL:(id)arg1;
- (void)setNameImageMaskURL:(id)arg1;
- (void)setNameImageURL:(id)arg1;
- (void)setNavigationChromeBackgroundDarkModeImageCompactURL:(id)arg1;
- (void)setNavigationChromeBackgroundDarkModeImageLargeURL:(id)arg1;
- (void)setNavigationChromeBackgroundDarkModeImageURL:(id)arg1;
- (void)setNavigationChromeBackgroundImageCompactURL:(id)arg1;
- (void)setNavigationChromeBackgroundImageLargeURL:(id)arg1;
- (void)setNavigationChromeBackgroundImageURL:(id)arg1;
- (void)setPromotedPuzzleIDs:(id)arg1;
- (void)setSuperfeedConfigResourceID:(id)arg1;
- (void)setThemeConfiguration:(id)arg1;
- (id)superfeedConfigResourceID;
- (id)themeConfiguration;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)generateCoverImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateExploreTileImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateFeedNavImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageCompactAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageForDarkBackgroundAssetHandleWithAssetManager:(id)arg1;
- (id)generateNameImageMaskAssetHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundDarkModeImageCompactHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundDarkModeImageHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundDarkModeImageLargeHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundImageCompactHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundImageHandleWithAssetManager:(id)arg1;
- (id)generateNavigationChromeBackgroundImageLargeHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailImageAssetHandleForDate:(id)arg1 difficulty:(id)arg2 assetManager:(id)arg3;

@end