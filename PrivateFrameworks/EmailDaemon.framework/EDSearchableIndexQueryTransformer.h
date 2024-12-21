/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDSearchableIndexQueryTransformer : NSObject <EDLocalSearchProvider> {
    EDSearchableIndexManager * _searchableIndexManager;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (readonly) Class superclass;

+ (id)transformSearchableIndexPredicate:(id)arg1 suggestion:(id)arg2 searchableIndexManager:(id)arg3;

- (void).cxx_destruct;
- (id)initWithSearchableIndexManager:(id)arg1;
- (id)persistenceQueryForSearchableIndexQuery:(id)arg1;
- (id)searchableIndexManager;

@end