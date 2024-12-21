/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPuzzleRecord : PBCodable <NSCopying> {
    NSMutableArray * _allowedStorefrontIDs;
    NSMutableArray * _authors;
    NTPBRecordBase * _base;
    long long  _behaviorFlags;
    NSMutableArray * _blockedStorefrontIDs;
    NSString * _dataResourceID;
    long long  _difficultyLevel;
    struct { 
        unsigned int behaviorFlags : 1; 
        unsigned int difficultyLevel : 1; 
        unsigned int minimumNewsVersion : 1; 
        unsigned int isDeprecated : 1; 
        unsigned int isDraft : 1; 
        unsigned int isPaid : 1; 
    }  _has;
    bool  _isDeprecated;
    bool  _isDraft;
    bool  _isPaid;
    NSString * _language;
    long long  _minimumNewsVersion;
    NTPBDate * _publishedDate;
    NSString * _puzzleDescription;
    NSString * _puzzleTypeID;
    NSMutableArray * _relatedPuzzleIDs;
    NSString * _subtitle;
    NSString * _teaserConfiguration;
    NSString * _thumbnailImageCompactURL;
    NSString * _thumbnailImageLargeURL;
    NSString * _title;
}

@property (nonatomic, retain) NSMutableArray *allowedStorefrontIDs;
@property (nonatomic, retain) NSMutableArray *authors;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, retain) NSMutableArray *blockedStorefrontIDs;
@property (nonatomic, retain) NSString *dataResourceID;
@property (nonatomic) long long difficultyLevel;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic) bool hasBehaviorFlags;
@property (nonatomic, readonly) bool hasDataResourceID;
@property (nonatomic) bool hasDifficultyLevel;
@property (nonatomic) bool hasIsDeprecated;
@property (nonatomic) bool hasIsDraft;
@property (nonatomic) bool hasIsPaid;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasMinimumNewsVersion;
@property (nonatomic, readonly) bool hasPublishedDate;
@property (nonatomic, readonly) bool hasPuzzleDescription;
@property (nonatomic, readonly) bool hasPuzzleTypeID;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTeaserConfiguration;
@property (nonatomic, readonly) bool hasThumbnailImageCompactURL;
@property (nonatomic, readonly) bool hasThumbnailImageLargeURL;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool isDeprecated;
@property (nonatomic) bool isDraft;
@property (nonatomic) bool isPaid;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) long long minimumNewsVersion;
@property (nonatomic, retain) NTPBDate *publishedDate;
@property (nonatomic, retain) NSString *puzzleDescription;
@property (nonatomic, retain) NSString *puzzleTypeID;
@property (nonatomic, retain) NSMutableArray *relatedPuzzleIDs;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *teaserConfiguration;
@property (nonatomic, retain) NSString *thumbnailImageCompactURL;
@property (nonatomic, retain) NSString *thumbnailImageLargeURL;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)allowedStorefrontIDsType;
+ (Class)authorsType;
+ (Class)blockedStorefrontIDsType;
+ (Class)relatedPuzzleIDsType;

- (void)addAllowedStorefrontIDs:(id)arg1;
- (void)addAuthors:(id)arg1;
- (void)addBlockedStorefrontIDs:(id)arg1;
- (void)addRelatedPuzzleIDs:(id)arg1;
- (id)allowedStorefrontIDs;
- (id)allowedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)allowedStorefrontIDsCount;
- (id)authors;
- (id)authorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorsCount;
- (id)base;
- (long long)behaviorFlags;
- (id)blockedStorefrontIDs;
- (id)blockedStorefrontIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)blockedStorefrontIDsCount;
- (void)clearAllowedStorefrontIDs;
- (void)clearAuthors;
- (void)clearBlockedStorefrontIDs;
- (void)clearRelatedPuzzleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataResourceID;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)difficultyLevel;
- (bool)hasBase;
- (bool)hasBehaviorFlags;
- (bool)hasDataResourceID;
- (bool)hasDifficultyLevel;
- (bool)hasIsDeprecated;
- (bool)hasIsDraft;
- (bool)hasIsPaid;
- (bool)hasLanguage;
- (bool)hasMinimumNewsVersion;
- (bool)hasPublishedDate;
- (bool)hasPuzzleDescription;
- (bool)hasPuzzleTypeID;
- (bool)hasSubtitle;
- (bool)hasTeaserConfiguration;
- (bool)hasThumbnailImageCompactURL;
- (bool)hasThumbnailImageLargeURL;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isDeprecated;
- (bool)isDraft;
- (bool)isEqual:(id)arg1;
- (bool)isPaid;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (long long)minimumNewsVersion;
- (id)publishedDate;
- (id)puzzleDescription;
- (id)puzzleTypeID;
- (bool)readFrom:(id)arg1;
- (id)relatedPuzzleIDs;
- (id)relatedPuzzleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)relatedPuzzleIDsCount;
- (void)setAllowedStorefrontIDs:(id)arg1;
- (void)setAuthors:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setBlockedStorefrontIDs:(id)arg1;
- (void)setDataResourceID:(id)arg1;
- (void)setDifficultyLevel:(long long)arg1;
- (void)setHasBehaviorFlags:(bool)arg1;
- (void)setHasDifficultyLevel:(bool)arg1;
- (void)setHasIsDeprecated:(bool)arg1;
- (void)setHasIsDraft:(bool)arg1;
- (void)setHasIsPaid:(bool)arg1;
- (void)setHasMinimumNewsVersion:(bool)arg1;
- (void)setIsDeprecated:(bool)arg1;
- (void)setIsDraft:(bool)arg1;
- (void)setIsPaid:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMinimumNewsVersion:(long long)arg1;
- (void)setPublishedDate:(id)arg1;
- (void)setPuzzleDescription:(id)arg1;
- (void)setPuzzleTypeID:(id)arg1;
- (void)setRelatedPuzzleIDs:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTeaserConfiguration:(id)arg1;
- (void)setThumbnailImageCompactURL:(id)arg1;
- (void)setThumbnailImageLargeURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)teaserConfiguration;
- (id)thumbnailImageCompactURL;
- (id)thumbnailImageLargeURL;
- (id)title;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)generateThumbnailLargeImageAssetHandleWithAssetManager:(id)arg1;
- (id)generateThumbnailSmallImageAssetHandleWithAssetManager:(id)arg1;

@end