/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphSeasonNode : PGGraphOptimizedNode <MAUniquelyIdentifiableNode, PGAssetCollectionFeature, PGGraphLocalizable, PGGraphSynonymSupport> {
    NSString * _name;
}

@property (nonatomic, readonly) PGGraphSeasonNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *featureIdentifier;
@property (nonatomic, readonly) unsigned long long featureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;
@property (readonly) NSString *name;
@property (readonly) unsigned long long numberOfMomentNodes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)_localizationKeyForSeasonNode:(id)arg1;
+ (id)dateOfSeason;
+ (id)filter;
+ (id)filterForSeasonName:(id)arg1;

- (void).cxx_destruct;
- (id)collection;
- (id)description;
- (unsigned short)domain;
- (id)featureIdentifier;
- (unsigned long long)featureType;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)initWithName:(id)arg1;
- (id)label;
- (id)localizedName;
- (id)localizedSynonyms;
- (id)name;
- (unsigned long long)numberOfMomentNodes;
- (id)propertyDictionary;
- (id)propertyForKey:(id)arg1;
- (id)uniquelyIdentifyingFilter;

@end
