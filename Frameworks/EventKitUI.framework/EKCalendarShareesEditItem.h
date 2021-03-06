/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableArray;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {
    NSMutableArray *_shareeCells;
}

@property(retain) NSMutableArray * shareeCells;

- (id)_addPersonCell;
- (void)_popBackToCalendarEditor:(BOOL)arg1;
- (id)_shareeCellForName:(id)arg1 detailText:(id)arg2 additionalDetailText:(id)arg3;
- (id)_stringForShareeAccessLevel:(int)arg1;
- (id)_stringForShareeStatus:(int)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(int)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)eventStoreForShareePickerViewController:(id)arg1;
- (id)headerTitle;
- (int)numberOfSubitems;
- (void)reset;
- (BOOL)saveStateToCalendar:(id)arg1;
- (void)setShareeCells:(id)arg1;
- (id)shareeCells;
- (void)shareePickerViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (void)shareeViewControllerDidChangeAccessLevel:(id)arg1;

@end
