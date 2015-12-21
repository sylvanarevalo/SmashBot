#include "Walk.h"

void Walk::PressButtons()
{
    switch(m_state->m_memory->player_two_action)
    {
        case WALK_SLOW:
        {
            if(m_isRight)
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, .75, .5);
            }
            else
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, .25, .5);
            }
            break;
        }
        case WALK_MIDDLE:
        {
            if(m_isRight)
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, 1, .5);
            }
            else
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, 0, .5);
            }
            break;
        }
        case WALK_FAST:
        {
            if(m_isRight)
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, 1, .5);
            }
            else
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, 0, .5);
            }
            break;
        }
        default:
        {
            if(m_isRight)
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, .6, .5);
            }
            else
            {
                m_controller->tiltAnalog(Controller::BUTTON_MAIN, .4, .5);
            }
            break;
        }
    }
}

//We're always interruptible during a Walk
bool Walk::IsInterruptible()
{
    return true;
}

Walk::Walk(bool isRight)
{
    m_isRight = isRight;
}

Walk::~Walk()
{
}
