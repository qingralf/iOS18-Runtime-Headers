/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBHIconGridSizeClassDomain : NSObject {
    SBHIconGridSizeClassSet * _allGridSizeClasses;
    SBHIconGridSizeClassSet * _allNonDefaultGridSizeClasses;
}

@property (nonatomic, readonly, copy) SBHIconGridSizeClassSet *allGridSizeClasses;
@property (nonatomic, readonly, copy) SBHIconGridSizeClassSet *allNonDefaultGridSizeClasses;
@property (nonatomic, readonly) SBHIconGridSizeClassDomain *fallbackDomain;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)builtInDomain;
+ (id)effectiveGridSizeClassDomainForDomain:(id)arg1;
+ (id)globalDomain;

- (void).cxx_destruct;
- (void)addIconGridSizeClassesToSet:(id)arg1;
- (id)allGridSizeClasses;
- (id)allNonDefaultGridSizeClasses;
- (id)archiveValueForGridSizeClass:(id)arg1;
- (unsigned long long)atxStackLayoutSizeForIconGridSizeClass:(id)arg1;
- (long long)chsWidgetFamilyForIconGridSizeClass:(id)arg1;
- (bool)containsGridSizeClass:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionForGridSizeClass:(id)arg1;
- (void)enumerateGridSizeClassesFilteredBySet:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateGridSizeClassesUsingBlock:(id /* block */)arg1;
- (unsigned long long)filterKnownCHSWidgetFamilies:(unsigned long long)arg1;
- (id)gridSizeClassForArchiveValue:(id)arg1;
- (id)gridSizeClassForDescription:(id)arg1;
- (id)gridSizeClassOrder;
- (id)iconGridSizeClassForATXStackLayoutSize:(unsigned long long)arg1;
- (id)iconGridSizeClassForCHSWidgetFamily:(long long)arg1;
- (id)iconGridSizeClassPassingTest:(id /* block */)arg1;
- (id)infoForIconGridSizeClass:(id)arg1;
- (id)infoValueForGridSizeClass:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithGridSizeClass:(id)arg1 info:(id)arg2;
- (id)initWithGridSizeClasses:(id)arg1;
- (id)initWithGridSizeClasses:(id)arg1 order:(id)arg2 fallbackDomain:(id)arg3;
- (id)initWithIconGridSizeClassDomain:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)registeredGridSizeClassOrder;
- (id)registeredGridSizeClasses;
- (id)shortDescriptionForGridSizeClass:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ControlCenterUIServices.framework/ControlCenterUIServices

+ (id)controlCenterDomain;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (id)pr_widgetDomain;

@end