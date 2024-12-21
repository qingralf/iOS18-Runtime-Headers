/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewReorderedItem : NSObject {
    UICollectionViewCell * _cell;
    bool  _isUncommitted;
    NSIndexPath * _lastCommittedIndexPath;
    NSIndexPath * _originalIndexPath;
    NSIndexPath * _targetIndexPath;
}

@property (nonatomic, readonly) UICollectionViewCell *cell;
@property (nonatomic, readonly) bool isUncommitted;
@property (nonatomic, readonly) NSIndexPath *lastCommittedIndexPath;
@property (nonatomic, retain) NSIndexPath *originalIndexPath;
@property (nonatomic, retain) NSIndexPath *targetIndexPath;

- (void).cxx_destruct;
- (id)cell;
- (void)commitTargetIndexPath;
- (id)description;
- (id)expectedCellIndexPath;
- (id)initWithCell:(id)arg1 indexPath:(id)arg2;
- (bool)isNOOP;
- (bool)isUncommitted;
- (id)lastCommittedIndexPath;
- (id)originalIndexPath;
- (void)setOriginalIndexPath:(id)arg1;
- (void)setTargetIndexPath:(id)arg1;
- (id)targetIndexPath;

@end