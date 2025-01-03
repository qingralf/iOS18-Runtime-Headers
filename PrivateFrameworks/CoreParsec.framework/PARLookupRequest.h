/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARLookupRequest : PARRequest <NSSecureCoding> {
    NSString * _appBundleId;
    NSString * _domain;
    long long  _lookupSelectionType;
    NSString * _preferredLanguage;
    NSString * _queryContext;
    NSString * _queryString;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic) long long lookupSelectionType;
@property (nonatomic, retain) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *queryContext;
@property (nonatomic, copy) NSString *queryString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lookupSelectionType;
- (unsigned int)nwActivityLabel;
- (id)preferredLanguage;
- (id)queryContext;
- (id)queryString;
- (Class)responseClass;
- (void)setAppBundleId:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setLookupSelectionType:(long long)arg1;
- (void)setPreferredLanguage:(id)arg1;
- (void)setQueryContext:(id)arg1;
- (void)setQueryString:(id)arg1;

@end
