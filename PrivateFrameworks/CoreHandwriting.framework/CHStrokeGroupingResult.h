/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupingResult : NSObject <NSCopying, NSSecureCoding> {
    struct map<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>, std::less<std::set<unsigned long>>, std::allocator<std::pair<const std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>>> { 
        struct __tree<std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, std::__map_value_compare<std::set<unsigned long>, std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, std::less<std::set<unsigned long>>>, std::allocator<std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::set<unsigned long>, std::__value_type<std::set<unsigned long>, std::vector<std::unordered_map<unsigned long, float>>>, std::less<std::set<unsigned long>>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _cachedAdjacencies;
    NSSet * _createdStrokeGroups;
    NSSet * _deletedStrokeGroups;
    NSSet * _nontextStrokeGroups;
    NSArray * _strokeGroupClusters;
    NSSet * _strokeGroups;
    NSArray * _strokeGroupsSortedByCTLD;
    NSArray * _strokeGroupsSortedByWritingOrientation;
    NSArray * _strokeGroupsSortedTopBottomLeftRight;
    NSArray * _textStrokeGroupClusters;
    NSSet * _textStrokeGroups;
    NSArray * _textStrokeGroupsSortedByCTLD;
    NSArray * _textStrokeGroupsSortedByWritingOrientation;
}

@property (nonatomic, readonly, copy) NSSet *createdStrokeGroups;
@property (nonatomic, readonly, copy) NSSet *deletedStrokeGroups;
@property (nonatomic, readonly, copy) NSSet *nontextStrokeGroups;
@property (nonatomic, readonly, copy) NSArray *strokeGroupClusters;
@property (nonatomic, readonly, copy) NSSet *strokeGroups;
@property (nonatomic, readonly, copy) NSArray *textStrokeGroupClusters;
@property (nonatomic, readonly, copy) NSSet *textStrokeGroups;

+ (id)expandedStrokeGroupClusters:(id)arg1 allClusters:(id)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void*)cachedAdjacencies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdStrokeGroups;
- (id)deletedStrokeGroups;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupingResultUpdatedWithGroupReplacements:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3;
- (id)initWithStrokeGroups:(id)arg1 createdStrokeGroups:(id)arg2 deletedStrokeGroups:(id)arg3 cachedAdjacencies:(const void*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToStrokeGroupingResult:(id)arg1;
- (id)nontextStrokeGroups;
- (id)strokeGroupClusters;
- (id)strokeGroups;
- (id)strokeGroupsSortedBy:(unsigned long long)arg1 textGroupsOnly:(bool)arg2;
- (id)textStrokeGroupClusters;
- (id)textStrokeGroupClustersAtPosition:(struct CGPoint { double x1; double x2; })arg1 closestAbove:(id*)arg2 closestBelow:(id*)arg3;
- (id)textStrokeGroups;

@end