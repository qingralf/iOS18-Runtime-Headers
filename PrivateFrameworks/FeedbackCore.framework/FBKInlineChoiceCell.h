/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FeedbackCore.framework/FeedbackCore
 */

@interface FBKInlineChoiceCell : UITableViewCell <FBKDiffableCell> {
    FBKQuestionChoice * _choice;
    NSString * itemIdentifier;
}

@property (nonatomic, retain) FBKQuestionChoice *choice;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)choice;
- (id)itemIdentifier;
- (void)setChoice:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)showCheckmark:(bool)arg1;

@end