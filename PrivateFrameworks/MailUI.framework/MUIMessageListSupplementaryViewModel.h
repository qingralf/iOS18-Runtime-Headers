/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI
 */

@interface MUIMessageListSupplementaryViewModel : NSObject <EFPubliclyDescribable> {
    long long  _displayReason;
    long long  _sectionIndex;
    bool  _shouldDisplaySupplementaryView;
    NSString * _supplementaryKind;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) long long displayReason;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sectionIndex;
@property (nonatomic) bool shouldDisplaySupplementaryView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *supplementaryKind;

+ (id)_publicDescriptionOfDisplayReason:(long long)arg1;
+ (id)supplementaryViewModelWithDisplay:(bool)arg1 kind:(id)arg2 sectionIndex:(long long)arg3 reason:(long long)arg4;

- (void).cxx_destruct;
- (id)description;
- (long long)displayReason;
- (id)ef_publicDescription;
- (id)initShouldDisplaySupplementaryView:(bool)arg1 ofKind:(id)arg2 atSectionWithIndex:(long long)arg3 withDisplayReason:(long long)arg4;
- (long long)sectionIndex;
- (void)setDisplayReason:(long long)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setShouldDisplaySupplementaryView:(bool)arg1;
- (void)setSupplementaryKind:(id)arg1;
- (bool)shouldDisplaySupplementaryView;
- (id)supplementaryKind;

@end
