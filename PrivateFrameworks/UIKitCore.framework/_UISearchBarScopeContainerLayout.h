/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase {
    bool  _collapsed;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _defaultScopeBarInsets;
    <_UISearchBarContainerSublayoutDelegate> * _delegate;
    bool  _hasScopeBar;
    id /* block */  _hostedScopeBarHeightForBarMetrics;
    id /* block */  _hostedScopeBarTopInsetForBarMetrics;
    _UISearchBarSearchContainerLayout * _neighboringSearchLayout;
    unsigned long long  _numberOfScopeTitles;
    UIView * _scopeBar;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scopeBarLayoutFrame;
    double  _scopeBarOpacity;
}

@property (getter=isCollapsed, nonatomic) bool collapsed;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } containerSpecificInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } defaultScopeBarInsets;
@property (nonatomic) <_UISearchBarContainerSublayoutDelegate> *delegate;
@property (nonatomic) bool hasScopeBar;
@property (nonatomic, copy) id /* block */ hostedScopeBarHeightForBarMetrics;
@property (nonatomic, copy) id /* block */ hostedScopeBarTopInsetForBarMetrics;
@property (nonatomic, readonly) double naturalContainerHeight;
@property (nonatomic, retain) _UISearchBarSearchContainerLayout *neighboringSearchLayout;
@property (nonatomic) unsigned long long numberOfScopeTitles;
@property (nonatomic, retain) UIView *scopeBar;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scopeBarLayoutFrame;
@property (nonatomic, readonly) double scopeBarOpacity;

- (void).cxx_destruct;
- (void)applyLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerSpecificInsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })defaultScopeBarInsets;
- (id)delegate;
- (id)description;
- (bool)hasScopeBar;
- (id /* block */)hostedScopeBarHeightForBarMetrics;
- (id /* block */)hostedScopeBarTopInsetForBarMetrics;
- (bool)isCollapsed;
- (double)naturalContainerHeight;
- (id)neighboringSearchLayout;
- (unsigned long long)numberOfScopeTitles;
- (id)scopeBar;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scopeBarLayoutFrame;
- (double)scopeBarOpacity;
- (double)scopeControlHeight;
- (void)setCollapsed:(bool)arg1;
- (void)setDefaultScopeBarInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasScopeBar:(bool)arg1;
- (void)setHostedScopeBarHeightForBarMetrics:(id /* block */)arg1;
- (void)setHostedScopeBarTopInsetForBarMetrics:(id /* block */)arg1;
- (void)setNeighboringSearchLayout:(id)arg1;
- (void)setNumberOfScopeTitles:(unsigned long long)arg1;
- (void)setScopeBar:(id)arg1;
- (void)updateLayout;

@end
