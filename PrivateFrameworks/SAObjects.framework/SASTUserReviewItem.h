/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTUserReviewItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *reviewDate;
@property (nonatomic, retain) SAUIDecoratedText *reviewText;
@property (nonatomic, retain) SAUIDecoratedText *reviewer;
@property (readonly) Class superclass;

+ (id)userReviewItem;
+ (id)userReviewItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)reviewDate;
- (id)reviewText;
- (id)reviewer;
- (void)setReviewDate:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setReviewer:(id)arg1;

@end
