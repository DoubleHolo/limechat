#import <Cocoa/Cocoa.h>


@interface DialogWindow : NSWindow
{
	id keyDelegate;
}

@property (nonatomic, assign) id keyDelegate;

@end


@interface NSObject (DialogWindowDelegate)
- (void)dialogWindowEscape;
- (void)dialogWindowEnter;
- (void)dialogWindowMoveDown;
- (void)dialogWindowMoveUp;
@end
