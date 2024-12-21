/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessoryCategoryItemProvider : HFItemProvider {
    NSMutableSet * _categoryItems;
    id /* block */  _filter;
    HMHome * _home;
}

@property (nonatomic, retain) NSMutableSet *categoryItems;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, retain) HMHome *home;

- (void).cxx_destruct;
- (id)categoryItems;
- (id /* block */)filter;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (void)setCategoryItems:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setHome:(id)arg1;

@end