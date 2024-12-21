/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stickers.framework/Stickers
 */

@interface STKSticker : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _companionRecentUUID;
    void accessibilityName;
    void attributionInfo;
    void byteCount;
    void creationDate;
    void effect;
    void externalURI;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  identifier;
    void lastUsedDate;
    void libraryIndex;
    void metadata;
    void name;
    void representations;
    void sanitizedPrompt;
    void searchText;
    void type;
}

@property (nonatomic, copy) NSUUID *_companionRecentUUID;
@property (nonatomic, copy) NSString *accessibilityName;
@property (nonatomic, retain) STKStickerAttributionInfo *attributionInfo;
@property (nonatomic) long long byteCount;
@property (nonatomic, readonly) bool canDistribute;
@property (nonatomic) double creationDate;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool distributionIsRestricted;
@property (nonatomic, readonly) NSArray *distributionRestrictions_ObjC;
@property (nonatomic) long long effect;
@property (nonatomic, copy) NSString *externalURI;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSUUID *id;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) bool isGeneratedSticker;
@property (nonatomic) double lastUsedDate;
@property (nonatomic) double libraryIndex;
@property (nonatomic, copy) NSData *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSArray *representations;
@property (nonatomic, copy) NSString *sanitizedPrompt;
@property (nonatomic, copy) NSString *searchText;

// Image: /System/Library/PrivateFrameworks/Stickers.framework/Stickers

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_companionRecentUUID;
- (id)accessibilityName;
- (id)attributionInfo;
- (long long)byteCount;
- (bool)canDistribute;
- (double)creationDate;
- (id)description;
- (bool)distributionIsRestricted;
- (id)distributionRestrictions_ObjC;
- (long long)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURI;
- (long long)hash;
- (id)id;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGeneratedSticker;
- (double)lastUsedDate;
- (double)libraryIndex;
- (id)metadata;
- (id)name;
- (id)representations;
- (id)sanitizedPrompt;
- (id)searchText;
- (void)setAccessibilityName:(id)arg1;
- (void)setAttributionInfo:(id)arg1;
- (void)setByteCount:(long long)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setEffect:(long long)arg1;
- (void)setExternalURI:(id)arg1;
- (void)setLastUsedDate:(double)arg1;
- (void)setLibraryIndex:(double)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRepresentations:(id)arg1;
- (void)setSanitizedPrompt:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)set_companionRecentUUID:(id)arg1;

// Image: /System/Library/Frameworks/StickerKit.framework/StickerKit

- (id)stk_asAdaptiveImageGlyphWithError:(id*)arg1;

@end