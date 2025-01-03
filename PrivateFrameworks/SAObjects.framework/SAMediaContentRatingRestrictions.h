/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMediaContentRatingRestrictions : AceObject <SAAceSerializable>

@property (nonatomic) long long appRestriction;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long movieRestriction;
@property (readonly) Class superclass;
@property (nonatomic) long long tvRestriction;

+ (id)mediaContentRatingRestrictions;
+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;

- (long long)appRestriction;
- (id)countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)movieRestriction;
- (void)setAppRestriction:(long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setMovieRestriction:(long long)arg1;
- (void)setTvRestriction:(long long)arg1;
- (long long)tvRestriction;

@end
