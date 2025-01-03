/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphBusinessNodeCollection : PGGraphNodeCollection <PGAssetCollectionFeatureNodeCollection>

@property (nonatomic, readonly) NSSet *businessNames;
@property (nonatomic, readonly) PGGraphBusinessCategoryNodeCollection *categoryNodes;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGGraphMomentNodeCollection *momentNodes;
@property (nonatomic, readonly) PGGraphPublicEventNodeCollection *publicEventNodes;
@property (readonly) Class superclass;

+ (id)businessNodeForBusinessMuid:(unsigned long long)arg1 inGraph:(id)arg2;
+ (id)businessNodesWithCIDINames:(id)arg1 inGraph:(id)arg2;
+ (Class)nodeClass;
+ (id)restaurantBusinessNodesInGraph:(id)arg1;

- (id)businessNames;
- (id)categoryNodes;
- (id)featureNodeCollection;
- (id)momentNodes;
- (id)publicEventNodes;

@end
