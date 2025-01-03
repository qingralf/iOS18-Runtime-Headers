/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBIconListGridLayoutConfiguration : NSObject <BSDescriptionProviding, NSCopying> {
    SBHAppLibraryVisualConfiguration * _appLibraryVisualConfiguration;
    SBHFloatingDockVisualConfiguration * _floatingDockVisualConfiguration;
    SBHFloatyFolderVisualConfiguration * _floatyFolderVisualConfiguration;
    SBHFolderIconVisualConfiguration * _folderIconVisualConfiguration;
    SBHIconAccessoryVisualConfiguration * _iconAccessoryVisualConfiguration;
    NSMutableDictionary * _iconGridSizeClassEditingAnimationStrengths;
    SBHMutableIconGridSizeClassIconImageInfoMap * _iconGridSizeClassIconImageInfos;
    SBHIconGridSizeClassSizeMap * _iconGridSizeClassSizes;
    NSMutableDictionary * _iconLabelVisualConfigurations;
    long long  _iconSpacingAxisMatchingBehavior;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeAdditionalWidgetLayoutInsets;
    SBHMutableIconGridSizeClassIconImageInfoMap * _landscapeIconGridSizeClassIconImageInfos;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeLayoutInsets;
    unsigned long long  _layoutInsetsEnforcementAxis;
    struct CGSize { 
        double width; 
        double height; 
    }  _listSizeForIconSpacingCalculation;
    unsigned long long  _numberOfLandscapeColumns;
    unsigned long long  _numberOfLandscapeRows;
    unsigned long long  _numberOfPortraitColumns;
    unsigned long long  _numberOfPortraitRows;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitAdditionalWidgetLayoutInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _portraitLayoutInsets;
    SBHRootFolderVisualConfiguration * _rootFolderVisualConfiguration;
    SBHIconGridSizeClassSizeMap * _rotatedIconGridSizeClassSizes;
    NSString * _rotatedLayoutClusterGridSizeClass;
    bool  _showsLabels;
    SBHSidebarVisualConfiguration * _sidebarVisualConfiguration;
    SBHIconGridSizeClassSet * _supportedIconGridSizeClasses;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _widgetContentMargins;
}

@property (nonatomic, copy) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) SBHFloatingDockVisualConfiguration *floatingDockVisualConfiguration;
@property (nonatomic, copy) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (nonatomic, copy) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (nonatomic, copy) SBHIconGridSizeClassSizeMap *iconGridSizeClassSizes;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; } iconImageInfo;
@property (nonatomic) long long iconSpacingAxisMatchingBehavior;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeAdditionalWidgetLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeLayoutInsets;
@property (nonatomic) unsigned long long layoutInsetsEnforcementAxis;
@property (nonatomic) struct CGSize { double x1; double x2; } listSizeForIconSpacingCalculation;
@property (nonatomic) unsigned long long numberOfLandscapeColumns;
@property (nonatomic) unsigned long long numberOfLandscapeRows;
@property (nonatomic) unsigned long long numberOfPortraitColumns;
@property (nonatomic) unsigned long long numberOfPortraitRows;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitAdditionalWidgetLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } portraitLayoutInsets;
@property (nonatomic, readonly, copy) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (nonatomic, copy) SBHIconGridSizeClassSizeMap *rotatedIconGridSizeClassSizes;
@property (nonatomic, copy) NSString *rotatedLayoutClusterGridSizeClass;
@property (nonatomic) bool showsLabels;
@property (nonatomic, copy) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, copy) SBHIconGridSizeClassSet *supportedIconGridSizeClasses;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } widgetContentMargins;

- (void).cxx_destruct;
- (id)appLibraryVisualConfiguration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (double)editingAnimationStrengthForGridSizeClass:(id)arg1;
- (id)floatingDockVisualConfiguration;
- (id)floatyFolderVisualConfiguration;
- (id)folderIconVisualConfiguration;
- (unsigned long long)hash;
- (id)iconAccessoryVisualConfiguration;
- (id)iconGridSizeClassSizes;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfo;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(id)arg1;
- (struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })iconImageInfoForGridSizeClass:(id)arg1 orientation:(long long)arg2;
- (id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1;
- (long long)iconSpacingAxisMatchingBehavior;
- (id)init;
- (bool)isEqual:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeAdditionalWidgetLayoutInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeLayoutInsets;
- (unsigned long long)layoutInsetsEnforcementAxis;
- (struct CGSize { double x1; double x2; })listSizeForIconSpacingCalculation;
- (unsigned long long)numberOfLandscapeColumns;
- (unsigned long long)numberOfLandscapeRows;
- (unsigned long long)numberOfPortraitColumns;
- (unsigned long long)numberOfPortraitRows;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitAdditionalWidgetLayoutInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })portraitLayoutInsets;
- (id)rootFolderVisualConfiguration;
- (id)rotatedIconGridSizeClassSizes;
- (id)rotatedLayoutClusterGridSizeClass;
- (void)setAppLibraryVisualConfiguration:(id)arg1;
- (void)setEditingAnimationStrength:(double)arg1 forGridSizeClass:(id)arg2;
- (void)setEditingAnimationStrengths:(id)arg1;
- (void)setFloatyFolderVisualConfiguration:(id)arg1;
- (void)setFolderIconVisualConfiguration:(id)arg1;
- (void)setIconAccessoryVisualConfiguration:(id)arg1;
- (void)setIconGridSizeClassSizes:(id)arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 forGridSizeClass:(id)arg2;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 forGridSizeClass:(id)arg2 orientation:(long long)arg3;
- (void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2;
- (void)setIconSpacingAxisMatchingBehavior:(long long)arg1;
- (void)setLandscapeAdditionalWidgetLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLandscapeLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutInsetsEnforcementAxis:(unsigned long long)arg1;
- (void)setListSizeForIconSpacingCalculation:(struct CGSize { double x1; double x2; })arg1;
- (void)setNumberOfLandscapeColumns:(unsigned long long)arg1;
- (void)setNumberOfLandscapeRows:(unsigned long long)arg1;
- (void)setNumberOfPortraitColumns:(unsigned long long)arg1;
- (void)setNumberOfPortraitRows:(unsigned long long)arg1;
- (void)setPortraitAdditionalWidgetLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPortraitLayoutInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRotatedIconGridSizeClassSizes:(id)arg1;
- (void)setRotatedLayoutClusterGridSizeClass:(id)arg1;
- (void)setShowsLabels:(bool)arg1;
- (void)setSidebarVisualConfiguration:(id)arg1;
- (void)setSupportedIconGridSizeClasses:(id)arg1;
- (void)setWidgetContentMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)showsLabels;
- (id)sidebarVisualConfiguration;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)supportedIconGridSizeClasses;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })widgetContentMargins;

@end
