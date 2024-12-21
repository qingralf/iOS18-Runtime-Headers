/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSSuggestion : NSObject <ATXSuggestionExecutableProtocol, NSSecureCoding> {
    NSString * _adaptedModelRecipeID;
    NSString * _bundleID;
    NSString * _conversationIdentifier;
    NSString * _derivedIntentIdentifier;
    bool  _familySuggestion;
    NSString * _groupName;
    INImage * _image;
    bool  _isAdaptedModelCreated;
    bool  _isAdaptedModelUsed;
    NSString * _messagesGroupIdentifier;
    NSDictionary * _modelSuggestionProxies;
    NSString * _reason;
    NSString * _reasonType;
    NSArray * _recipients;
    NSNumber * _score;
    long long  _suggestionType;
    NSString * _supportedBundleIDs;
    NSString * _trialID;
    NSString * _utiList;
}

@property (nonatomic, retain) NSString *adaptedModelRecipeID;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (nonatomic, readonly, copy) NSString *derivedIntentIdentifier;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool familySuggestion;
@property (nonatomic, readonly, copy) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INImage *image;
@property (nonatomic) bool isAdaptedModelCreated;
@property (nonatomic) bool isAdaptedModelUsed;
@property (nonatomic, readonly) bool isReturnToSender;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic, retain) NSDictionary *modelSuggestionProxies;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *reasonType;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) NSNumber *score;
@property (nonatomic) long long suggestionType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *supportedBundleIDs;
@property (nonatomic, copy) NSString *trialID;
@property (nonatomic, retain) NSString *utiList;

+ (id)suggestionForBundleID:(id)arg1 derivedIntentIdentifier:(id)arg2 knowledgeStore:(id)arg3 contactResolver:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adaptedModelRecipeID;
- (id)bundleID;
- (id)conversationIdentifier;
- (id)derivedIntentIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)familySuggestion;
- (id)groupName;
- (unsigned long long)hash;
- (id)image;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 derivedIntentIdentifier:(id)arg5 image:(id)arg6 reason:(id)arg7 reasonType:(id)arg8 score:(id)arg9 familySuggestion:(bool)arg10;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6;
- (id)initWithBundleID:(id)arg1 conversationIdentifier:(id)arg2 groupName:(id)arg3 recipients:(id)arg4 reason:(id)arg5 reasonType:(id)arg6 score:(id)arg7;
- (id)initWithBundleID:(id)arg1 recipients:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAdaptedModelCreated;
- (bool)isAdaptedModelUsed;
- (bool)isEqual:(id)arg1;
- (bool)isReturnToSender;
- (id)messagesGroupIdentifier;
- (id)modelSuggestionProxies;
- (id)reason;
- (id)reasonType;
- (id)recipients;
- (id)score;
- (void)setAdaptedModelRecipeID:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsAdaptedModelCreated:(bool)arg1;
- (void)setIsAdaptedModelUsed:(bool)arg1;
- (void)setMessagesGroupIdentifier:(id)arg1;
- (void)setModelSuggestionProxies:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setReasonType:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setSuggestionType:(long long)arg1;
- (void)setSupportedBundleIDs:(id)arg1;
- (void)setTrialID:(id)arg1;
- (void)setUtiList:(id)arg1;
- (long long)suggestionType;
- (id)supportedBundleIDs;
- (id)trialID;
- (id)utiList;

@end