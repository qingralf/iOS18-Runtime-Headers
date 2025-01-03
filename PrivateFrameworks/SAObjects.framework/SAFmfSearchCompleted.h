/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSNumber *atRequestedLocation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *fmfLocations;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSURL *searchContext;
@property (readonly) Class superclass;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)atRequestedLocation;
- (id)encodedClassName;
- (id)fmfLocations;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)searchContext;
- (void)setAtRequestedLocation:(id)arg1;
- (void)setFmfLocations:(id)arg1;
- (void)setSearchContext:(id)arg1;

@end
