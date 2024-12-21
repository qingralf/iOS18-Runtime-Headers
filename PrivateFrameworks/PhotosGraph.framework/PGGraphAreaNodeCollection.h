/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphAreaNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection, PGGraphLocationOrAreaNodeCollection>

@property (nonatomic, readonly) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)areaNodesForNames:(id)arg1 inGraph:(id)arg2;
+ (id)areaNodesWithCIDINames:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;

- (id)addressNodes;
- (void)enumerateIdentifiersSortedByPopularityScoreWithBlock:(id /* block */)arg1;
- (void)enumeratePopularityScoresUsingBlock:(id /* block */)arg1;
- (id)featureNodeCollection;
- (id)names;
- (id)nonBlockedAreaNodes;

@end