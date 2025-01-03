/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMessage : NSObject <NSCopying, NSSecureCoding, SGSpotlightIdentifiers> {
    NSArray * _accountHandles;
    NSString * _accountType;
    NSArray * _attachments;
    NSString * _bundleIdentifier;
    NSString * _contentProtection;
    _PASCachedResult * _dataDetectorMatchesWithSignatureForContentCached;
    NSDate * _date;
    NSString * _domainIdentifier;
    SGHarvestQueueMetrics * _harvestMetrics;
    _PASCachedResult * _isInhumanContentCached;
    _PASCachedResult * _isInhumanSenderCached;
    bool  _isSent;
    bool  _isStoredEncrypted;
    NSString * _mailConversationIdentifier;
    _PASCachedResult * _messageSubjectDetectedDataCached;
    NSString * _source;
    NSString * _subject;
    _PASCachedResult * _taggedCharacterRangesCached;
    NSString * _textContent;
    _PASCachedResult * _textContentLanguageIdentifierCached;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSArray *accountHandles;
@property (nonatomic, copy) NSString *accountType;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) CSPerson *author;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) long long contentLength;
@property (nonatomic, copy) NSString *contentProtection;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } detectedDataSignatureRange;
@property (nonatomic, copy) NSString *domainIdentifier;
@property (nonatomic, retain) SGHarvestQueueMetrics *harvestMetrics;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInhumanContent;
@property (nonatomic, readonly) bool isInhumanSender;
@property (nonatomic) bool isSent;
@property (nonatomic) bool isStoredEncrypted;
@property (nonatomic, copy) NSString *mailConversationIdentifier;
@property (nonatomic, readonly) NSArray *messageSubjectDetectedData;
@property (nonatomic, readonly) NSArray *plainTextDetectedData;
@property (nonatomic, copy) NSString *source;
@property (nonatomic, copy) NSString *subject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *taggedCharacterRanges;
@property (nonatomic, copy) NSString *textContent;
@property (nonatomic, readonly) NSString *textContentLanguageIdentifier;
@property (nonatomic, copy) NSString *uniqueIdentifier;

+ (id)fromDictionary:(id)arg1;
+ (id)messageWithSearchableItem:(id)arg1;
+ (id)preferredLanguages;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHandles;
- (id)accountType;
- (id)asDictionary;
- (id)attachments;
- (id)author;
- (id)bundleIdentifier;
- (long long)contentLength;
- (id)contentProtection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataDetectorMatchesWithSignature;
- (id)date;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })detectedDataSignatureRange;
- (id)domainIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)harvestMetrics;
- (id)init;
- (id)initForBuilding;
- (id)initWithCoder:(id)arg1;
- (id)initWithMailContentEvent:(id)arg1 contentProtection:(id)arg2;
- (id)initWithMessageDictionary:(id)arg1;
- (id)initWithMessagesContentEvent:(id)arg1 contentProtection:(id)arg2;
- (id)initWithSearchableItem:(id)arg1;
- (bool)isEqualToMessage:(id)arg1;
- (bool)isInhumanContent;
- (bool)isInhumanContentNoncached;
- (bool)isInhumanSender;
- (bool)isSent;
- (bool)isStoredEncrypted;
- (id)mailConversationIdentifier;
- (id)messageSubjectDetectedData;
- (id)plainTextDetectedData;
- (void)setAccountHandles:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setContentProtection:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDomainIdentifier:(id)arg1;
- (void)setHarvestMetrics:(id)arg1;
- (void)setIsSent:(bool)arg1;
- (void)setIsStoredEncrypted:(bool)arg1;
- (void)setMailConversationIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setTextContent:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)source;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;
- (id)spotlightReference;
- (id)spotlightUniqueIdentifier;
- (id)subject;
- (id)taggedCharacterRanges;
- (id)textContent;
- (id)textContentLanguageIdentifier;
- (id)uniqueIdentifier;

@end
