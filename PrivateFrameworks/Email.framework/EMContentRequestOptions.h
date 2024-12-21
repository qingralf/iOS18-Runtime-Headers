/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMContentRequestOptions : NSObject <EMContentRequestOptionsBuilder, NSCopying, NSSecureCoding> {
    long long  _cacheBehavior;
    bool  _includeCachedMetadataJSON;
    long long  _includeSuggestionItems;
    unsigned long long  _maximumNumberOfOriginalContentMessagesToRequest;
    long long  _networkUsage;
    bool  _requestAllHeaders;
    NSArray * _requestedHeaderKeys;
    NSString * _requestedRepresentation;
}

@property (nonatomic) long long cacheBehavior;
@property (nonatomic) bool includeCachedMetadataJSON;
@property (nonatomic) long long includeSuggestionItems;
@property (nonatomic) unsigned long long maximumNumberOfOriginalContentMessagesToRequest;
@property (nonatomic) long long networkUsage;
@property (nonatomic) bool requestAllHeaders;
@property (nonatomic, copy) NSArray *requestedHeaderKeys;
@property (nonatomic, copy) NSString *requestedRepresentation;

+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestionItems:(bool)arg3;
+ (id)optionsWithRequestedRepresentationType:(id)arg1 networkUsage:(long long)arg2 includeSuggestions:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cacheBehavior;
- (id)copyWithBuilder:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeCachedMetadataJSON;
- (long long)includeSuggestionItems;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maximumNumberOfOriginalContentMessagesToRequest;
- (long long)networkUsage;
- (bool)requestAllHeaders;
- (id)requestedHeaderKeys;
- (id)requestedRepresentation;
- (void)setCacheBehavior:(long long)arg1;
- (void)setIncludeCachedMetadataJSON:(bool)arg1;
- (void)setIncludeSuggestionItems:(long long)arg1;
- (void)setMaximumNumberOfOriginalContentMessagesToRequest:(unsigned long long)arg1;
- (void)setNetworkUsage:(long long)arg1;
- (void)setRequestAllHeaders:(bool)arg1;
- (void)setRequestedHeaderKeys:(id)arg1;
- (void)setRequestedRepresentation:(id)arg1;

@end