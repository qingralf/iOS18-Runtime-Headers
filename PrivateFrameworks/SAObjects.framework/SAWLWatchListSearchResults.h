/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWLWatchListSearchResults : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *matchedResults;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)watchListSearchResults;
+ (id)watchListSearchResultsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)matchedResults;
- (bool)requiresResponse;
- (void)setMatchedResults:(id)arg1;

@end
