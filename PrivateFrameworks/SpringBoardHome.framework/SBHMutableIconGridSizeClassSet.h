/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHMutableIconGridSizeClassSet : SBHIconGridSizeClassSet {
    bool  _containsAllGridSizeClasses;
    bool  _containsAllNonDefaultGridSizeClasses;
    NSMutableSet * _gridSizeClassGroups;
    NSMutableSet * _gridSizeClasses;
    NSMutableSet * _removedGridSizeClasses;
}

@property (nonatomic, copy) NSSet *gridSizeClassGroups;
@property (nonatomic, copy) NSSet *gridSizeClasses;

- (void).cxx_destruct;
- (id)_removedGridSizeClasses;
- (void)_replaceAllGridSizeClassesWithGridSizeClasses:(id)arg1;
- (void)addGridSizeClass:(id)arg1;
- (void)addGridSizeClassGroup:(id)arg1;
- (bool)containsGridSizeClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)gridSizeClassGroups;
- (id)gridSizeClasses;
- (id)initWithGridSizeClasses:(id)arg1 gridSizeClassGroups:(id)arg2;
- (id)initWithIconGridSizeClassSet:(id)arg1;
- (void)intersectGridSizeClassSet:(id)arg1;
- (void)removeGridSizeClass:(id)arg1;
- (void)setGridSizeClassGroups:(id)arg1;
- (void)setGridSizeClasses:(id)arg1;
- (void)unionGridSizeClassSet:(id)arg1;

@end
