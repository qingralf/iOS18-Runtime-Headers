/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphBelongsToEdge : PGGraphOptimizedEdge {
    double  _importance;
}

@property (readonly) double importance;
@property (readonly) PGGraphNode<PGSocialGroupMember> *memberNode;
@property (readonly) PGGraphSocialGroupNode *socialGroupNode;

+ (id)filter;
+ (void)setImportance:(double)arg1 onBelongsToEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (double)importance;
- (id)initFromMemberNode:(id)arg1 toSocialGroupNode:(id)arg2 importance:(double)arg3;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (id)memberNode;
- (id)propertyDictionary;
- (id)socialGroupNode;

@end
